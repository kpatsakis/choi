void fun()
{
  int entity_0 = 4;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  char* entity_6;
  char entity_4[29] = "";
  entity_4 = NULL;
  memset(entity_8, 'b', entity_0-1);
  entity_8[entity_0-1]='';
  memset(entity_4, 'A', 29-1);
  entity_4[29-1]='';
  entity_6 = (char*)malloc(22*sizeof(char));
  entity_6[22-1]='';
  entity_0 = 90;
  entity_8[7] = 'M';
}