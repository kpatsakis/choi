void fun()
{
  int entity_2 = 2;
  char entity_1[5] = "";
  entity_1 = NULL;
  char* entity_0;
  char entity_7[66] = "";
  entity_7 = NULL;
  char* entity_8;
  entity_0 = (char*)malloc(74*sizeof(char));
  entity_0[74-1]='';
  memset(entity_7, 'j', 66-1);
  entity_7[66-1]='';
  memset(entity_1, 'B', 5-1);
  entity_1[5-1]='';
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[entity_2-1]='';
  entity_2 = 86;
  strcpy(entity_8, entity_1);
}