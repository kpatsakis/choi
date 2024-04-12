void fun()
{
  int entity_1 = 3;
  char entity_6[11] = "";
  entity_6 = NULL;
  char entity_4[68] = "";
  entity_4 = NULL;
  char entity_0 = 'W';
  memset(entity_6, 'V', 11-1);
  entity_6[11-1]='';
  memset(entity_4, 'u', 68-1);
  entity_4[68-1]='';
  entity_6[62] = 'o';
}