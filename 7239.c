void fun()
{
  int entity_5 = 29;
  char* entity_8;
  char entity_7[53] = "";
  entity_7 = NULL;
  entity_8 = (char*)malloc(87*sizeof(char));
  entity_8[87-1]='';
  memset(entity_7, 'k', 53-1);
  entity_7[53-1]='';
  entity_7[entity_5] = 'g';
}