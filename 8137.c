void fun()
{
  int entity_1 = 50;
  int entity_4 = 97;
  char* entity_0;
  char entity_6[18] = "";
  entity_6 = NULL;
  memset(entity_6, 'k', 18-1);
  entity_6[18-1]='';
  entity_0 = (char*)malloc(89*sizeof(char));
  entity_0[89-1]='';
  entity_1 = 9;
  entity_6[entity_1] = 'o';
}