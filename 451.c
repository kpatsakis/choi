void fun()
{
  int entity_2 = 84;
  char* entity_0;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(47*sizeof(char));
  entity_7[47-1]='';
  entity_0 = (char*)malloc(18*sizeof(char));
  entity_0[18-1]='';
  memset(entity_4, 'S', entity_2-1);
  entity_4[entity_2-1]='';
  entity_4[77] = 'f';
}