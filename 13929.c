void fun()
{
  int entity_1 = 76;
  entity_1 = 70;
  char* entity_2;
  char entity_3[27] = "";
  char* entity_9;
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[0]='0';
  entity_9 = (char*)malloc(90*sizeof(char));
  entity_9[0]='0';
  memset(entity_3, 'g', 27-1);
  entity_3[27-1]='0';
  memcpy(entity_2, entity_3, 27*sizeof(char));
}