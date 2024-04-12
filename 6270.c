void fun()
{
  int entity_6 = 55;
  char entity_7[66] = "";
  entity_7 = NULL;
  char* entity_3;
  char entity_0[97] = "";
  entity_0 = NULL;
  memset(entity_7, 'e', 66-1);
  entity_7[66-1]='';
  memset(entity_0, 'n', 97-1);
  entity_0[97-1]='';
  entity_3 = (char*)malloc(66*sizeof(char));
  entity_3[66-1]='';
  entity_0[entity_6] = 'g';
}