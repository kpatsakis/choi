void fun()
{
  int entity_1 = 21;
  char entity_3[66] = "";
  entity_3 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  memset(entity_3, 'T', 66-1);
  entity_3[66-1]='';
  memcpy(entity_2, entity_3, 66*sizeof(char));
}