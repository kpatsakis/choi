void fun()
{
  int entity_1 = 51;
  int entity_6 = 90;
  char* entity_7;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char* entity_2;
  memset(entity_5, 'L', entity_1-1);
  entity_5[entity_1-1]='';
  entity_2 = (char*)malloc(37*sizeof(char));
  entity_2[37-1]='';
  entity_7 = (char*)malloc(96*sizeof(char));
  entity_7[96-1]='';
  entity_1 = 93;
  memcpy(entity_7, entity_5, entity_1*sizeof(char));
}