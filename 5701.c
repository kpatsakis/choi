void fun()
{
  int entity_4 = 18;
  char* entity_3;
  char entity_7[97] = "";
  entity_7 = NULL;
  entity_3 = (char*)malloc(77*sizeof(char));
  entity_3[77-1]='';
  memset(entity_7, 'r', 97-1);
  entity_7[97-1]='';
  entity_7[entity_4] = 'a';
}