void fun()
{
  int entity_3 = 22;
  char* entity_6;
  char* entity_9;
  char entity_0[41] = "";
  entity_0 = NULL;
  char entity_8[66] = "";
  entity_8 = NULL;
  memset(entity_0, 's', 41-1);
  entity_0[41-1]='';
  entity_9 = (char*)malloc(88*sizeof(char));
  entity_9[88-1]='';
  entity_6 = (char*)malloc(5*sizeof(char));
  entity_6[5-1]='';
  memset(entity_8, 'b', 66-1);
  entity_8[66-1]='';
  memcpy(entity_9, entity_0, 41*sizeof(char));
}