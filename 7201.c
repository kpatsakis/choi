void fun()
{
  int entity_3 = 44;
  entity_3 = 63;
  char entity_2[72] = "";
  entity_2 = NULL;
  char entity_7[63] = "";
  entity_7 = NULL;
  char entity_6 = 'D';
  memset(entity_7, 'T', 63-1);
  entity_7[63-1]='';
  memset(entity_2, 'A', 72-1);
  entity_2[72-1]='';
  entity_7[entity_3] = 'B';
}