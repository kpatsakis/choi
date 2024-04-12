void fun()
{
  int entity_2 = 58;
  char entity_1[84] = "";
  entity_1 = NULL;
  char* entity_8;
  char entity_9 = 'X';
  memset(entity_1, 'b', 84-1);
  entity_1[84-1]='';
  entity_8 = (char*)malloc(76*sizeof(char));
  entity_8[76-1]='';
  entity_1[entity_2] = 'p';
}