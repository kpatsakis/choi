void fun()
{
  int entity_6 = 33;
  char entity_3[66] = "";
  entity_3 = NULL;
  char* entity_2;
  memset(entity_3, 'g', 66-1);
  entity_3[66-1]='';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  entity_6 = 21;
  memcpy(entity_2, entity_3, 66*sizeof(char));
}