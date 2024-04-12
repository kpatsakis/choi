void fun()
{
  int entity_5 = 20;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  char* entity_3;
  char entity_1 = 'v';
  memset(entity_2, 'V', entity_5-1);
  entity_2[entity_5-1]='';
  entity_3 = (char*)malloc(48*sizeof(char));
  entity_3[48-1]='';
  entity_5 = 30;
  strcpy(entity_3, entity_2);
}