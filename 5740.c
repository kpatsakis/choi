void fun()
{
  int entity_0 = 26;
  char* entity_6;
  char entity_1[6] = "";
  entity_1 = NULL;
  entity_6 = (char*)malloc(99*sizeof(char));
  entity_6[99-1]='';
  memset(entity_1, 'R', 6-1);
  entity_1[6-1]='';
  entity_0 = 30;
  entity_1[entity_0] = 'z';
}