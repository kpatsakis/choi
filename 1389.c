void fun()
{
  int entity_7 = 30;
  entity_7 = 30;
  char* entity_1;
  char entity_5[entity_7] = "";
  entity_5 = NULL;
  char* entity_8;
  memset(entity_5, 'l', entity_7-1);
  entity_5[entity_7-1]='';
  entity_8 = (char*)malloc(99*sizeof(char));
  entity_8[99-1]='';
  entity_1 = (char*)malloc(71*sizeof(char));
  entity_1[71-1]='';
  strcpy(entity_8, entity_5);
}