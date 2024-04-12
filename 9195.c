void fun()
{
  int entity_6 = 11;
  entity_6 = 66;
  char* entity_2;
  char entity_0[84] = "";
  entity_0 = NULL;
  memset(entity_0, 'c', 84-1);
  entity_0[84-1]='';
  entity_2 = (char*)malloc(40*sizeof(char));
  entity_2[40-1]='';
  entity_0[entity_6] = 'C';
}