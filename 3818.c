void fun()
{
  int entity_6 = 24;
  int entity_8 = 77;
  char entity_2[82] = "";
  entity_2 = NULL;
  char entity_7[43] = "";
  entity_7 = NULL;
  char entity_4[73] = "";
  entity_4 = NULL;
  memset(entity_2, 'S', 82-1);
  entity_2[82-1]='';
  memset(entity_7, 'z', 43-1);
  entity_7[43-1]='';
  memset(entity_4, 'r', 73-1);
  entity_4[73-1]='';
  entity_2[entity_8] = 'd';
}