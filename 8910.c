void fun()
{
  int entity_5 = 12;
  int entity_0 = 80;
  entity_0 = 28;
  char* entity_7;
  char entity_4 = 'H';
  char entity_3[56] = "";
  entity_3 = NULL;
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memset(entity_3, 's', 56-1);
  entity_3[56-1]='';
  strcpy(entity_7, entity_3);
}