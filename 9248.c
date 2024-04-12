void fun()
{
  int entity_7 = 26;
  int entity_2 = 0;
  char entity_8[89] = "";
  entity_8 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(28*sizeof(char));
  entity_3[28-1]='';
  memset(entity_8, 'X', 89-1);
  entity_8[89-1]='';
  entity_8[entity_7] = 'r';
}