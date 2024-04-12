void fun()
{
  int entity_9 = 22;
  char* entity_7;
  char entity_5[66] = "";
  entity_5 = NULL;
  char entity_3[70] = "";
  entity_3 = NULL;
  memset(entity_5, 'y', 66-1);
  entity_5[66-1]='';
  entity_7 = (char*)malloc(38*sizeof(char));
  entity_7[38-1]='';
  memset(entity_3, 'z', 70-1);
  entity_3[70-1]='';
  memcpy(entity_7, entity_3, 70*sizeof(char));
}