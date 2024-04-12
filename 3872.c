void fun()
{
  int entity_6 = 70;
  char entity_2[2] = "";
  entity_2 = NULL;
  char* entity_7;
  char* entity_8;
  char entity_4 = 'B';
  entity_8 = (char*)malloc(93*sizeof(char));
  entity_8[93-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  memset(entity_2, 'T', 2-1);
  entity_2[2-1]='';
  memcpy(entity_7, entity_2, 2*sizeof(char));
}