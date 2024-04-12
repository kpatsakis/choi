void fun()
{
  int entity_9 = 36;
  char* entity_8;
  char entity_7[66] = "";
  entity_7 = NULL;
  char entity_3[72] = "";
  entity_3 = NULL;
  memset(entity_3, 'o', 72-1);
  entity_3[72-1]='';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  memset(entity_7, 'e', 66-1);
  entity_7[66-1]='';
  memcpy(entity_8, entity_3, 72*sizeof(char));
}