void fun()
{
  int entity_0 = 90;
  char* entity_5;
  char entity_7[64] = "";
  entity_7 = NULL;
  memset(entity_7, 'e', 64-1);
  entity_7[64-1]='';
  entity_5 = (char*)malloc(89*sizeof(char));
  entity_5[89-1]='';
  entity_7[58] = 'x';
}