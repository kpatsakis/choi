void fun()
{
  int entity_7 = 87;
  int entity_6 = 20;
  entity_6 = 76;
  char* entity_1;
  char entity_9 = 'V';
  char* entity_0;
  char entity_4[59] = "";
  entity_4 = NULL;
  memset(entity_4, 'M', 59-1);
  entity_4[59-1]='';
  entity_0 = (char*)malloc(21*sizeof(char));
  entity_0[21-1]='';
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  memcpy(entity_1, entity_4, 59*sizeof(char));
}