void fun()
{
  int entity_6 = 67;
  entity_6 = 98;
  char entity_2[95] = "";
  entity_2 = NULL;
  char* entity_0;
  char* entity_7;
  entity_0 = (char*)malloc(40*sizeof(char));
  entity_0[40-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  memset(entity_2, 'X', 95-1);
  entity_2[95-1]='';
  memcpy(entity_7, entity_2, 95*sizeof(char));
}