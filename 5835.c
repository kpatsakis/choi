void fun()
{
  int entity_1 = 3;
  char* entity_6;
  char entity_0[35] = "";
  entity_0 = NULL;
  char entity_3[35] = "";
  entity_3 = NULL;
  memset(entity_0, 'e', 35-1);
  entity_0[35-1]='';
  memset(entity_3, 'h', 35-1);
  entity_3[35-1]='';
  entity_6 = (char*)malloc(71*sizeof(char));
  entity_6[71-1]='';
  entity_0[entity_1] = 'J';
}