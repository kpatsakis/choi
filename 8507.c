void fun()
{
  int entity_6 = 68;
  char entity_3 = 'G';
  char* entity_7;
  char* entity_5;
  char entity_1[59] = "";
  entity_1 = NULL;
  entity_5 = (char*)malloc(7*sizeof(char));
  entity_5[7-1]='';
  memset(entity_1, 'j', 59-1);
  entity_1[59-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  memcpy(entity_7, entity_1, 59*sizeof(char));
}