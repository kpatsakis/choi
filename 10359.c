void fun()
{
  char entity_2[82] = "";
  char entity_4[72] = "";
  memset(entity_2, 'I', 82-1);
  entity_2[82-1]='0';
  memset(entity_4, 'A', 72-1);
  entity_4[72-1]='0';
  entity_2[75] = 'z';
}