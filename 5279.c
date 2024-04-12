void fun()
{
  int entity_5 = 88;
  entity_5 = 84;
  char* entity_2;
  char entity_4 = 'U';
  char entity_3[58] = "";
  entity_3 = NULL;
  entity_2 = (char*)malloc(34*sizeof(char));
  entity_2[34-1]='';
  memset(entity_3, 't', 58-1);
  entity_3[58-1]='';
  entity_3[entity_5] = 'x';
}