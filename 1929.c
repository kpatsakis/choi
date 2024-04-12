void fun()
{
  int entity_6 = 74;
  entity_6 = 83;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char* entity_2;
  char entity_4[28] = "";
  entity_4 = NULL;
  memset(entity_4, 'G', 28-1);
  entity_4[28-1]='';
  entity_2 = (char*)malloc(59*sizeof(char));
  entity_2[59-1]='';
  memset(entity_5, 'n', entity_6-1);
  entity_5[entity_6-1]='';
  entity_5[21] = 'b';
}