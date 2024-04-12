void fun()
{
  int entity_3 = 51;
  char* entity_1;
  char entity_6 = 'V';
  char entity_9[44] = "";
  entity_9 = NULL;
  char entity_7[25] = "";
  entity_7 = NULL;
  char* entity_8;
  memset(entity_9, 's', 44-1);
  entity_9[44-1]='';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  memset(entity_7, 'X', 25-1);
  entity_7[25-1]='';
  entity_1 = (char*)malloc(74*sizeof(char));
  entity_1[74-1]='';
  memcpy(entity_8, entity_9, 44*sizeof(char));
}