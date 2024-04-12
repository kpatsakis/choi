void fun()
{
  int entity_7 = 98;
  int entity_6 = 60;
  int entity_9 = 93;
  int entity_1 = 57;
  char entity_2[79] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 'Z', 79-1);
  entity_2[79-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  memcpy(entity_3, entity_2, 79*sizeof(char));
}