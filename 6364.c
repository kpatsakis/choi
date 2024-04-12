void fun()
{
  int entity_3 = 79;
  int entity_6 = 16;
  char* entity_2;
  char entity_4[95] = "";
  entity_4 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(62*sizeof(char));
  entity_7[62-1]='';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  memset(entity_4, 'M', 95-1);
  entity_4[95-1]='';
  memcpy(entity_2, entity_4, 95*sizeof(char));
}