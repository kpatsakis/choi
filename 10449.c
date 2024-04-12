void fun()
{
  char* entity_0;
  char entity_2[82] = "";
  entity_0 = (char*)malloc(99*sizeof(char));
  entity_0[0]='0';
  memset(entity_2, 'y', 82-1);
  entity_2[82-1]='0';
  entity_2[75] = 'z';
}