void fun()
{
  int entity_1 = 43;
  entity_1 = 79;
  char* entity_7;
  char entity_8[53] = "";
  entity_8 = NULL;
  memset(entity_8, 'G', 53-1);
  entity_8[53-1]='';
  entity_7 = (char*)malloc(35*sizeof(char));
  entity_7[35-1]='';
  entity_8[entity_1] = 'o';
}