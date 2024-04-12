void fun()
{
  int entity_3 = 24;
  char entity_2[66] = "";
  entity_2 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(16*sizeof(char));
  entity_1[16-1]='';
  memset(entity_2, 'p', 66-1);
  entity_2[66-1]='';
  memcpy(entity_1, entity_2, 66*sizeof(char));
}