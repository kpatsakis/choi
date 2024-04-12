void fun()
{
  int entity_3 = 75;
  char entity_4[99] = "";
  entity_4 = NULL;
  char* entity_6;
  memset(entity_4, 'o', 99-1);
  entity_4[99-1]='';
  entity_6 = (char*)malloc(5*sizeof(char));
  entity_6[5-1]='';
  entity_4[entity_3] = 'Z';
}