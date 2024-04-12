void fun()
{
  int entity_5 = 70;
  int entity_9 = 78;
  char entity_3 = 'o';
  char* entity_7;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  memset(entity_8, 's', entity_9-1);
  entity_8[entity_9-1]='';
  entity_7 = (char*)malloc(74*sizeof(char));
  entity_7[74-1]='';
  strcpy(entity_7, entity_8);
}