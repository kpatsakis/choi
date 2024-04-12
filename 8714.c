void fun()
{
  int entity_0 = 12;
  entity_0 = 89;
  char* entity_1;
  char entity_3[88] = "";
  entity_3 = NULL;
  entity_1 = (char*)malloc(22*sizeof(char));
  entity_1[22-1]='';
  memset(entity_3, 'A', 88-1);
  entity_3[88-1]='';
  entity_3[entity_0] = 'b';
}