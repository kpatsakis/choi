void fun()
{
  int entity_0 = 57;
  int entity_3 = 70;
  char entity_6[95] = "";
  char entity_2[entity_0] = "";
  char* entity_4;
  memset(entity_2, 'p', entity_0-1);
  entity_2[entity_0-1]='0';
  entity_4 = (char*)malloc(29*sizeof(char));
  entity_4[0]='0';
  memset(entity_6, 'A', 95-1);
  entity_6[95-1]='0';
  entity_0 = 59;
  strcpy(entity_4, entity_2);
}