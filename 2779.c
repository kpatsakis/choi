void fun()
{
  int entity_4 = 16;
  char* entity_9;
  char entity_8[66] = "";
  entity_8 = NULL;
  entity_9 = (char*)malloc(2*sizeof(char));
  entity_9[2-1]='';
  memset(entity_8, 'N', 66-1);
  entity_8[66-1]='';
  memcpy(entity_9, entity_8, 66*sizeof(char));
}