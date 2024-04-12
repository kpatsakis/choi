void fun()
{
  int entity_3 = 90;
  int entity_0 = 85;
  char* entity_4;
  char* entity_2;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  entity_2 = (char*)malloc(90*sizeof(char));
  entity_2[90-1]='';
  memset(entity_7, 'b', entity_3-1);
  entity_7[entity_3-1]='';
  entity_4 = (char*)malloc(62*sizeof(char));
  entity_4[62-1]='';
  strcpy(entity_2, entity_7);
}