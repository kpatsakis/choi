void fun()
{
  int entity_9 = 17;
  char* entity_1;
  char* entity_8;
  char entity_2[7] = "";
  entity_2 = NULL;
  char entity_7 = 'M';
  char entity_4[66] = "";
  entity_4 = NULL;
  memset(entity_4, 'X', 66-1);
  entity_4[66-1]='';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  entity_1 = (char*)malloc(72*sizeof(char));
  entity_1[72-1]='';
  memset(entity_2, 'u', 7-1);
  entity_2[7-1]='';
  entity_9 = 12;
  strcpy(entity_8, entity_4);
}