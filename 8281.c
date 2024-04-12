void fun()
{
  int entity_1 = 5;
  char* entity_3;
  char entity_6[38] = "";
  entity_6 = NULL;
  char entity_0[66] = "";
  entity_0 = NULL;
  memset(entity_6, 'a', 38-1);
  entity_6[38-1]='';
  memset(entity_0, 'O', 66-1);
  entity_0[66-1]='';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  entity_1 = 37;
  memcpy(entity_3, entity_0, 66*sizeof(char));
}