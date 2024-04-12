void fun()
{
  int entity_5 = 64;
  char entity_7[66] = "";
  entity_7 = NULL;
  char entity_8 = 'P';
  char entity_1[39] = "";
  entity_1 = NULL;
  char* entity_6;
  memset(entity_7, 'F', 66-1);
  entity_7[66-1]='';
  entity_6 = (char*)malloc(36*sizeof(char));
  entity_6[36-1]='';
  memset(entity_1, 'F', 39-1);
  entity_1[39-1]='';
  memcpy(entity_6, entity_7, 66*sizeof(char));
}