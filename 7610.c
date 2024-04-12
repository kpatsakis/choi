void fun()
{
  int entity_2 = 68;
  char* entity_6;
  char entity_7[87] = "";
  entity_7 = NULL;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  memset(entity_7, 'E', 87-1);
  entity_7[87-1]='';
  entity_6 = (char*)malloc(45*sizeof(char));
  entity_6[45-1]='';
  memset(entity_3, 'y', entity_2-1);
  entity_3[entity_2-1]='';
  entity_2 = 67;
  memcpy(entity_6, entity_3, entity_2*sizeof(char));
}