void fun()
{
  int entity_1 = 45;
  entity_1 = 51;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  char* entity_5;
  char* entity_8;
  entity_8 = (char*)malloc(37*sizeof(char));
  entity_8[37-1]='';
  entity_5 = (char*)malloc(58*sizeof(char));
  entity_5[58-1]='';
  memset(entity_7, 'q', entity_1-1);
  entity_7[entity_1-1]='';
  entity_7[23] = 'W';
}