void fun()
{
  int entity_8 = 40;
  char entity_2[99] = "";
  entity_2 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(88*sizeof(char));
  entity_3[88-1]='';
  memset(entity_2, 'N', 99-1);
  entity_2[99-1]='';
  entity_2[80] = 'g';
}