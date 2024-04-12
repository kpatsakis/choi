void fun()
{
  int entity_2 = 37;
  entity_2 = 20;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  char entity_8 = 't';
  char* entity_0;
  char* entity_7;
  entity_0 = (char*)malloc(76*sizeof(char));
  entity_0[76-1]='';
  memset(entity_4, 'K', entity_2-1);
  entity_4[entity_2-1]='';
  entity_7 = (char*)malloc(86*sizeof(char));
  entity_7[86-1]='';
  entity_4[42] = 'o';
}