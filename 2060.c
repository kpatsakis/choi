void fun()
{
  int entity_1 = 18;
  char* entity_7;
  char* entity_5;
  char entity_6[8] = "";
  entity_6 = NULL;
  entity_7 = (char*)malloc(entity_1*sizeof(char));
  entity_7[entity_1-1]='';
  entity_5 = (char*)malloc(11*sizeof(char));
  entity_5[11-1]='';
  memset(entity_6, 'v', 8-1);
  entity_6[8-1]='';
  entity_1 = 40;
  strcpy(entity_7, entity_6);
}