void fun()
{
  int entity_2 = 73;
  char* entity_6;
  char entity_3[99] = "";
  entity_3 = NULL;
  memset(entity_3, 'I', 99-1);
  entity_3[99-1]='';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  strcpy(entity_6, entity_3);
}