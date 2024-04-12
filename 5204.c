void fun()
{
  int entity_0 = 91;
  int entity_8 = 50;
  entity_8 = 10;
  char* entity_7;
  char entity_3[98] = "";
  entity_3 = NULL;
  entity_7 = (char*)malloc(66*sizeof(char));
  entity_7[66-1]='';
  memset(entity_3, 'Z', 98-1);
  entity_3[98-1]='';
  entity_3[entity_8] = 'd';
}